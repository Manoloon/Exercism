#if !defined(DARTS_H)
#define DARTS_H

namespace darts {
float distSquared(float x1,float y1,float x2,float y2){
    return (x2-x1) * (x2-x1) + (y2 - y1) * (y2-y1);
}
    int score(float x,float y){
        float dist = distSquared(x,y,0,0);
        // dist is greater than 10 squared 
       if(dist > 100){return 0;}
        // dist is greater than 5 squared
       else if(dist > 25 ){return 1;}
        // dist is greater than 1 (middle circle)   
       else if (dist > 1 ){return 5;} 
        // hit in the inner circle.
       else {return 10;}        
    }
} // namespace darts

#endif //DARTS_H