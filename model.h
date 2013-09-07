#ifndef MODEL_H
#define MODEL_H

class model
{
    int *Carpet;
public:
    model(int whidt=800, int hight=600);
    ~model();
    int get_(int x, int y);
    void calculate_Carpet(int center_element=0);
};

#endif // MODEL_H
