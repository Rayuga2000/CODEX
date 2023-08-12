import random
import math
import matplotlib.pyplot as plt

responses = [
    (2, 5, 5, 0),
    (3, 6, 8, 0),
    (4, 9, 10, 1),
    (7, 5, 1, 0),
    (10, 0, 10, 1)
]

W0=random.uniform(0,1)
W1=random.uniform(0,1)
W2=random.uniform(0,1)
B=random.uniform(0,1)

W0_list = []
W1_list = []
W2_list = []
B_list = []
Loss = []

act_Y=[None]*5

for i in range(100):
    for j in range(5):
        X0, X1, X2, Expected_Y = responses[j]
        Actual_Y=W0*X0+W1*X1+W2*X2+B
        Activation=1/(1+math.exp(-Actual_Y))
        diff=Expected_Y-Activation
        W0=W0+0.01*diff*X0
        W1=W1+0.01*diff*X1
        W2=W2+0.01*diff*X2
        B=B+0.01*diff
        act_Y[j]=Actual_Y
    # Append the values of W and B to the respective lists
    W0_list.append(W0)
    W1_list.append(W1)
    W2_list.append(W2)
    B_list.append(B)
    Loss.append(Actual_Y-Expected_Y)
        
print("W0 = ",W0,"\nW1 = ",W1,"\nW2 = ",W2,"\nB = \n",B)

"""The enumerate() function is a built-in Python function that takes an iterable as input and
returns an iterator that yields pairs of the form (index, element).
And to store those values we are using i,Actual_Y"""
for i, Actual_Y in enumerate(act_Y):
    print(f"Person {i+1}: {Actual_Y:.5f}")

# Plot the values of W's and B across iterations
plt.figure(figsize=(10, 6))
plt.plot(range(100), W0_list, label='W0')
plt.plot(range(100), W1_list, label='W1')
plt.plot(range(100), W2_list, label='W2')
plt.xlabel('Iterations')
plt.ylabel('Values')
plt.title('Values of W across Iterations')
plt.legend()
plt.show()

plt.figure(figsize=(10, 6))
plt.plot(range(100), B_list, label='B')
plt.xlabel('Iterations')
plt.ylabel('Values')
plt.title('Values of B across Iterations')
plt.legend()
plt.show()

plt.figure(figsize=(10, 6))
plt.plot(range(100), Loss, label='Loss')
plt.xlabel('Iterations')
plt.ylabel('Values')
plt.title('Values of Loss across Iterations')
plt.legend()
plt.show()