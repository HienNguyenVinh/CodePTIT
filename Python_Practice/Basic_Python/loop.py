i=1
while i <= 6:
    i += 1
    if(i == 3):
        #break
        pass
    elif(i == 4):
        continue
    print(i)
else:
    print('i>6')

for x in range(2, 32, 3):           #2: start point,                range(6) is the values 0 to 5, increment by 1
    print(x)                           #30: end point - not include in the end of loop
else:                                   #3: increment value
    print('done')