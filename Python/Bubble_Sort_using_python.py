num_arr = []
arr_length = raw_input("How many numbers will be there in the array:")

print("Enter the numbers...")
for i in range(int(arr_length)):
  num = raw_input("num"+str(i+1)+":")
  num_arr.append(int(num))
  
print("Your array is: ", num_arr)

flag = 0
for i in range(int(arr_length)):
  for j in range(int(arr_length)-i-1):
    if num_arr[j] > num_arr[j+1]:
      # swap the numbers
      num_arr[j], num_arr[j+1] = num_arr[j+1], num_arr[j]
      flag = 1
  if flag==0:
    # means nothing was swapped
    break

print("Sorted Array: ", num_arr)
      
