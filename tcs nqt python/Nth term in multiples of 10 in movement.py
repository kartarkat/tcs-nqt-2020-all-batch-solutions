#SLOT: 4
#Write a program to find the nth value in the series. 

#Problem description 
#here position starts at ( 0,0 ) and it will move in the direction right, top, left , bottom at the multiples of 10 . 
#( consider a graph with origin and directions as x, y, -x, -y on moving in x, y it will be positive term and in -x 
#and - y it will be in negative terms )



#Example-1
#Input: 1
#Expected Output: (10,0)

#Example-2
#Input: 4
#Expected Output: (-20 , -20 )

#Example-3
#Input: 3
#Expected Output: (-20 , 20 )

#PROGRAM IN python :


def find(num):
    x,y = 0,0
    for i in range(num):
        rem = i%4
        if (rem == 0):
            x = x + 10*(i+1);
        elif (rem == 1):
            y = y + 10*(i+1);
        elif (rem == 2):
            x = x - 10*(i+1);
        elif (rem == 3):
            y = y - 10*(i+1);
    print(x,",",y )

number = input()
find(int(number))
