#Multiples

a, b = input().split()
a, b = int(a),int(b)  
if a%b==0 or b%a==0:
    print("Multiples")
else:
    print("No Multiples")

# a, b = map(int, input().split())
# print("Multiples" if a % b == 0 or b % a == 0 else "No Multiples")
