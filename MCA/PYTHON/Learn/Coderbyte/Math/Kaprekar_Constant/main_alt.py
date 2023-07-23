def Kaprekar_Constant(num):
    count=0
    num=str(num)

    if len(num)<4 or len(set(num))<2:
        return "Number can't obtain the constant"

    while num!='6174':
        asc_num=int(''.join(sorted(num)))
        desc_num=int(''.join(sorted(num,reverse=True)))

        diff=abs(desc_num-asc_num)

        diff=str(diff)

        if len(diff)<4:
            for i in range(4-len(diff)):
                diff+='0'

        count+=1
        num=diff

    return count

print(Kaprekar_Constant(input("Enter the Number: ")))