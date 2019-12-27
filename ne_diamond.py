#psychozone
def printPattern(n) : 
    k = 0
    h=0
    g=0
  
    # Print upper triangle 
    for i in range(1,n+1) : 
  
        # Print spaces upper triangle 
        for j in range(1,n-i+1) : 
            print(" ",end="") 
              
        # Print # 
        while (k != (2 * i - 1)) : 
            if (k == 0  ) : 
                print(alpha[letter-1+h],end="")
                h+=1
            if(k == 2 * i - 2 and k!=0):
                print(alpha[letter+g],end=" ")
                g+=1
                
                
            else : 
                print(" ",end="") 
            k = k + 1
            
              
        k = 0
        #g=0
        #h=0
        
  
        # move to next row 
        print("") 
      
    n = n - 1
  
    # Print lower triangle spaces 
    for i in range (n+2,0,-1) : 
        # Print spaces 
        for j in range(0,n-i+1) : 
            print(" ",end="") 
              
        # Print letters descending
        k = 0
        while (k != (2 * i - 1)) :
            
            if (k == 0   ) :            
                print(alpha[letter-1+h],end="")
                h-=1
            if (k == 2 * i - 2 and k!=0 ):
                      
                print(alpha[letter+g],end=" ")
                g-=1
            else :
                
                print(" ",end="") 
            k = k + 1
            
          
        print("") 
              
# Driver code 
start = input("Enter starting letter in CAPS\n")
end=input("Enter ending letter in CAPS\n")
alpha=['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
for i in range(len(alpha)):
     if alpha[i]==start:
         letter=i+1
         print(letter)
     elif alpha[i]==end:
        end_let=i+1
        print(end_let)
n=end_let-letter
print(n)
          
        
     
printPattern(n) 
