import numpy as np

def main():
    t = int(input())
    for test in range (1, t + 1):
        inp = input().split(' ')
        n = int(inp[0])
        l = int(inp[1])
        str_arr = input().split(' ')
        arr = list()
        for i in str_arr:
            arr.append(int(i))
        ciph = list() 
        f = 0
        for i in range (l - 1):
            if(f):
                ciph.append(int(arr[i] / ciph[i - 1]))
            else:    
                if(f == 0 and arr[i] != arr[i + 1]):
                    ciph.append(int(np.gcd(arr[i], arr[i+1])))
                    f = 1
                else:
                    ciph.append(-1)
        if(ciph[0] == -1):
            j = 0
            while ciph[j] == -1:
                j += 1
            while j > 0:
                ciph[j - 1] = int(arr[j] / ciph[j])
                j -= 1
        ciph.insert(0, int(arr[0] / ciph[0]))
        ciph.append(int(arr[l - 1] / ciph[l - 1]))
        ciph1 = list()
        for i in range (l + 1):
            ciph1.append(ciph[i])
        ciph1.sort()
        code = list()
        for i in range (l):
            if(ciph1[i] != ciph1[i + 1]):
                code.append(ciph1[i])
        code.append(ciph1[l])
        alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        sol = ""
        for i in range (l + 1):
            for j in range (26):
                if ciph[i] == code[j]:
                    sol = sol + alpha[j]
        print("Case #" + str(test) + ": " + sol)
if __name__ == '__main__':
    main()