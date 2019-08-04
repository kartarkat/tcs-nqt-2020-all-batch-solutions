#SLOT: 3
#Write a program to convert a decimal number in the base 17 to a decimal number in base 10 :

#Problem statement

#apply decimal conversion logic to solve this problem, where 0 - 9 digits are same, while replace A B C D E F G with 10 11 12 13 14 15 16 respectively in the given input and do the conversion accordingly

#Example-1
#Input: 1A
#Expected Output: 27

#Example-2
#Input: 23GF
#Expected Output: 10980

#PROGRAM IN python :



def val(c): 
    if c >= '0' and c <= '9': 
        return ord(c) - ord('0') 
    else: 
        return ord(c) - ord('A') + 10; 


def findval(string): 
    llen = len(string) 
    power = 1  
    num = 0  
    base = 17
  
 
    for i in range(llen - 1, -1, -1):
        if val(string[i]) >= base: 
            print('Invalid Number') 
            return -1
        num += val(string[i]) * power 
        power = power * base 
    return num 
      
value = input()
print(findval(value)) 
  
