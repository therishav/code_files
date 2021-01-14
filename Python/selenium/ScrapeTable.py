from selenium import webdriver
from selenium.webdriver.firefox.firefox_binary import FirefoxBinary

# Setting up selenium and opening browser
binary = FirefoxBinary('C:\\Users\\Centros\\AppData\\Local\\Mozilla Firefox\\firefox')
driver = webdriver.Firefox(firefox_binary=binary)

driver.get('file:///D:/code/Python/selenium/table.html')

# Count number of rows present in the table
rows = len(driver.find_elements_by_xpath("/html/body/table/tbody/tr"))

# Count number of coloumns present in the table
cols = len(driver.find_elements_by_xpath("/html/body/table/tbody/tr[1]/th"))

print(rows)
print(cols)

for r in range(2, rows+1):
    for c in range(1, cols+1):
        value = driver.find_element_by_xpath(f'/html/body/table/tbody/tr[{ str(r) }]/td[{ str(c) }]').text
        print(value, end='  ')
    print()
