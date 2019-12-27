#python3
input_n = int(input())
input_numbers=[]
input_numbers = [int(x) for x in input().split()]
input_numbers.sort()
n=len(input_numbers)
x=input_numbers[n-2]*input_numbers[n-1]
print(x)

