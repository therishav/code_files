from selenium import webdriver
from selenium.webdriver.firefox.firefox_binary import FirefoxBinary


MAX_PAGE_NUM = 5
MAX_PAGE_DIG = 3

with open('results.csv', 'w') as f:
    f.write("Buyers, Price \n")

# Setting up selenium and opening browser
binary = FirefoxBinary('C:\\Users\\Centros\\AppData\\Local\\Mozilla Firefox\\firefox')
driver = webdriver.Firefox(firefox_binary=binary)

for i in range(1, MAX_PAGE_NUM + 1):
    page_num = (MAX_PAGE_DIG - len(str(i))) * "0" + str(i)
    url = 'http://econpy.pythonanywhere.com/ex/' + page_num + '.html'

    # GOTO URL
    driver.get(url)

    # Extract list of buyers and prices based on xpath
    buyers = driver.find_elements_by_xpath('//div[@title="buyer-name"]')
    prices = driver.find_elements_by_xpath('//span[@class="item-price"]')

    num_page_items = len(buyers)
    with open('results.csv', 'a') as f:
        for i in range(num_page_items):
            f.write(buyers[i].text + "," + prices[i].text + "\n")
