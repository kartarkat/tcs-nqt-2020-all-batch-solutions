
#SLOT: 2
#Write a program to find the difference between the sum of the digits in the even places and sum of the digits in the odd places

#Problem description 

#int the number 5179
#odd place terms are : (5+7) = 12
#even  place terms are : (1+9) = 10
#result :  12 - 10 = 2

#Example-1
#Input: 5179
#Expected Output: 2

#Example-2
#Input: 718
#Expected Output: 14

#PROGRAM IN python :


def diff(n): 
    odd = 0
    even = 0
    result = 0
    
    check = 1
    while (n != 0):
        if (check % 2 == 0): 
            even += n % 10
        else: 
            odd += n % 10
        n //= 10
        check += 1
  
    result = odd  - even
    if result > 0 :
        print (result)
    else :
        print (-1 * result)
  
# Driver code 
number = input("")
diff(int(number)) 