//(x*x+y*y-1)^3-x*x*y*y*y==0 <0裡面
size(400,400); //視窗大小
fill(255,0,0);  //red
noStroke();  //不要用外框的stroke
//ellipse(200,200,100,150); //先試橢圓
for(int i=0;i<400;i++){    
  for(int j=0;j<400;j++){
    //要把大的座標j,i換成數學-2~+2的x,y
  
    float x=(j-200)/100.0;
    float y=-(i-200)/100.0; //y要改成負的
    float xxyy=(x*x+y*y-1);
    if(xxyy*xxyy*xxyy-x*x*y*y*y <0){
    ellipse(j,i,5,5);
    }
  }
}
