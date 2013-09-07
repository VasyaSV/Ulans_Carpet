#include "model.h"

model::model(int whidt, int hight)
{
    Carpet = new int[whidt*hight];
    for (int i=0; i<whidt*hight; i++)
        Carpet[i]=0;
}

model::~model(){
    delete Carpet;
}

void model::calculate_Carpet(int center_element){

}
