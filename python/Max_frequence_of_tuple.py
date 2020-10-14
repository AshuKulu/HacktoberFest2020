# Maximum frequency in Tuple 
# Using loop + count() 

# initializing tuple 
test_tuple = (15, 12, 33, 45, 12, 33, 12)

# printing original tuple 
print("The original tuple : " + str(test_tuple))

# Maximum frequency in Tuple 
# Using loop + count() 
freq = 0
res = test_tuple[0]
for ele in test_tuple:
    curr_freq = test_tuple.count(ele)
    if curr_freq > freq:
        freq = curr_freq
        res = ele
# prints the leftmost highest frequency element of the tuple
# printing result  
print("Maximum element frequency tuple : " + str(res))
