
def x(f):
    def inner():
        print(1)
        ord()
    return inner    
   


def ord():
    print(2)

z=x(ord)
z()    