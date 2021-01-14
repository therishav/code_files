# try:
#     pass
# except Exception:
#     pass
# else:  ##Only runs if your don't throw an error
#     pass
# finally:  ##Runs no matter what happens
#     pass

try:
    f = open('curruptfile.txt')
    # if f.name == 'currupt_file.txt':
    #     raise Exception
except IOError as e:
    print('First!')
except Exception as e:
    print('Second')
else:
    print(f.read())
    f.close()
finally:
    print("Executing Finally...")

print('End of program')
