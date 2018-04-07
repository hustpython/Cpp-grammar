# include <iostream>
# include <stdlib.h>
# include "Dustman.h"
# include "Worker.h"
# include "Person.h"
using namespace std;

int main(void)
{
    //Worker worker("zhangsan",20);
    Dustman dustman("zhangsan",20);
    dustman.work();
    //worker.work();
    //Person person("Zhangsan");
    return 0;
}