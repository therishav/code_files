import json

with open('D:\\code\\Python\\selenium\\source-data.json') as access_json:
    read_content = json.load(access_json)

# question_access = read_content['results']
# print(type(question_access))

# print(question_access[0])

# for question_data in question_access:
#     question_data

# print(type(question_data))

# print('\n', question_data)

# replies_access = question_data['replies']

# print('\n', replies_access)
# print(type(replies_access))

# for replies_data in replies_access:
    # replies_data

# user_name = replies_data['user']['display_name']
# print(user_name)


def get_user_name():
    question_access = read_content['results']
    for question_data in question_access:
        replies_access = question_data['replies']
        for replies_data in replies_access:
            user_name = replies_data['user']['display_name']
            print(user_name)


get_user_name()
