#Print Logo using string alignment

def pole(thickk):
    for i in range(thickk+1):
        print((" "*((thickk-1)//2))+("H"*thickk).ljust((thickk*5))+("H"*thickk))

if __name__=="__main__":
    thickk=int(input("Enter Thickness of the Logo(must be odd no.): "))

    #Top Cone
    for i in range(1,thickk+1):
        print(("H"*(i+(i-1))).center(thickk*2))

    #Top Pole
    pole(thickk)

    #Mid Section
    for i in range((thickk+1)//2):
        print(((" "*((thickk-1)//2))+("H"*thickk)+"H"*thickk*5).center(thickk*5))

    #Bottom Pole
    pole(thickk)

    #Bottom Cone
    for i in range(thickk,0,-1):
        print((("H"*(i+(i-1))).center(thickk*2)).rjust(thickk*5+thickk*2))