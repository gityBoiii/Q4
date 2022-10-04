#include <iostream>
#include <stack>
#include "Image.h"
#include "State.h"
#include "Transition.h"
#include <vector>
using namespace std; 


int main()
{
   
    
    vector<State> StateList;
    vector<Transition> TransitionList;
    
    StateList.push_back(State(1, "배회"));
    StateList.push_back(State(2, "추격"));
    StateList.push_back(State(3, "공격"));
    StateList.push_back(State(4, "죽음"));

    TransitionList.push_back(Transition(1, "적발견", 2));
    TransitionList.push_back(Transition(2, "적놓침", 1));
    TransitionList.push_back(Transition(2, "사정거리접근", 3));
    TransitionList.push_back(Transition(3, "사정거리이탈", 2));
    TransitionList.push_back(Transition(3, "HP없음", 4));

    //vector<Image> ImageList;

       // 일일이 넣기 
   /*Image Pixel;
   Pixel.X = 0;
   Pixel.Y = 0;
   Pixel.R = 165;
   Pixel.G = 55;
   Pixel.B = 128;

   ImageList.push_back(Pixel);*/

   // 생성자에 넣기 
//ImageList.push_back(Image(0, 0, 165, 55, 128));

    return 0;
}