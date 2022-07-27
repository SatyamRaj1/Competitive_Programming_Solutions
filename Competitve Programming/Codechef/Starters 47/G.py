if __name__ == '__main__':
    t = int(input())
    while(t):
        n = int(input())
        s = input()
        flag = True
        ans = True
        while(n>0):
            if(n%2==0):
                n=n//2
                if(s[n:]==s[0:n]):
                    s=s[0:n]
                else:
                    ans = False
                    break
            else:
                n= n-1
                if(n==0):
                    break
                s = s[0:n]
        if(n==0 and ans):
            print("YES")
        else:
            print("NO")
        t-=1