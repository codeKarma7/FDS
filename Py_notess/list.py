# list is an ordered collection of items. Lists can be homogeneous or heterogeneous collection.

# 1. creation of list
# list = [1,2,"name",'karma','a'] #so called homogeneous or heterogeneous collection.
# print(list)
# print(type(list))


#2. Accessing list elements

# players = ["Ronaldo","Mbappe","Neymar","Vini","Messi"]
# print(players)
# goat = players[0]
# skillful = players[2]
# thief = players[4]
# print("Greatest of All Time :",goat)
# print("Most skillful player :",skillful)
# print("Robber/thief player :",thief)


#3. accessing from last list member : -ve indexing will be used to access element of the list from last or in reverse    

# gym_tools=["Dumbell","Plates","V-bar","curly-bar","rope"]
# last = gym_tools[-1]
# print(last)

# sec_last = gym_tools[-2]
# print(sec_last)


#4. List slicing 
#   slicing is the powerful feature in python that allows you to extract the portion of the list. 
# syntax :  

# games=["freefire","PUBG","Valorant","GTA","FIFA2024","COC"]
# print(games[0:5])

#5. Ommitting(removing) start and stop

# food = ["burger","roti","halwa","dipshi","pizza","milk"]
# print(food[:3])
# print(food[3:])

#6. Negative indexing

# num = [43,54,64,74,98,23,43]
# print(num[-3:]) # last dekhi count suru hunxa ani and starts from that position to print.
# print(num[:-3]) # last dekhi nai ocunt suru hunxa ani -3 index ma stop bhaneko le 74 samma print hunxa


#7. Specifying step size 

# fruits=["banana","apple","mango","litchi","coconut"]
# print(fruits[::3])





# List concatenation 

# list1 = [1,2,3,4,5]
# list2= [7,8,9,0]
# concatenated_list= list1 + list2
# print(concatenated_list)


# Length of the list : len()
 
# list = [1,2,3,4,5,6,7,8,9]
# print("Lenght of the list :",len(list))



# Nested list

nested_list = [[1,2,3],[4,5,6],[7,8,9]]
print(nested_list)

nested_group=[["Dipsi","Sulu","Karma"],["messi","ronaldo","neymar"],["cr7","lm10","bale"]]
print(nested_group)


# Accessing elements in nested list

nested_list = [[1,2,3],[4,5,6],[7,8,9]]
print(nested_list[0][0])
print(nested_list[0][2])
print(nested_list[2][0])


# Modifying elements in Nested list

nested_group=[["Dipsi","Sulu","Karma"],["messi","ronaldo","neymar"],["cr7","lm10","bale"]]
print(nested_group)

nested_group[0][2]="aka_kamma"
nested_group[2][1]="noob"
print(nested_group)


# Tuples in Python



