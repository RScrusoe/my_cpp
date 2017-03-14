#include<simplecpp>

    main_program()
{
    turtleSim();
    right(90);
    penUp();forward(150);
    right(90);penDown();
    repeat(360){forward(1);right(1);}
    wait(5);
    return 0;
}
