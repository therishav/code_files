student = {'name': 'Jhon', 'age': 25, 'courses': ['Math', 'CompSci', 4, 'Phy'], 'add': ['Jam']}

student['phone'] = '555-5555'
student['name'] = 'Jane'

# print(student)
# print(student.get('name'))
for key, value in student.items():
    print(key, value)

# making a student grade card dictionary

ign = {
        'BCS011': {'Asgn1': 81, 'Lab1': '-', 'TET': 51, 'Status': 'Completed'}
      }

print("Old ign: ", ign, '\n')

ign['BCS012'] = {'Asgn1': 71, 'Lab1': '-', 'TET': 11, 'Status': 'Not Completed'}

print("New ign: ", ign)

# Updatating a value of keys
# Dict[key].update(value)

# If your value is an expression pass it inside a dictionary
# Dict[key].update({'inner_keys': 'inner_value'})
