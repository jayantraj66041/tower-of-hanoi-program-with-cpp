# tower-of-hanoi-program-with-cpp

# Execution of Tower of Hanoi program with c++ \n\n

toh(3,a,b,c) \n
    toh(2,a,c,b)\n
        toh(1,a,b,c)
            toh(0,a,c,b)
            print a->c              a -> c
            toh(0,b,a,c)
        print a->b                  a -> b
        toh(1,c,a,b)
            toh(0,c,b,a)
            print c->b              c -> b
            toh(0,a,c,b)
    print a->c                      a -> c
    toh(2,b,a,c)
        toh(1,b,c,a)
            toh(0,b,a,c)
            print b->a              b -> a
            toh(0,c,b,a)
        print b->c                  b -> c
        toh(1,a,b,c)
            toh(0,a,c,b)
            print a->c              a -> c
            toh(0,b,a,c)
