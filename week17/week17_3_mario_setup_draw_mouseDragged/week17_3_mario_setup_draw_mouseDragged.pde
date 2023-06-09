//要有互動,把兩張圖片拉近來
PImage m, P;
void setup(){
  size(600,600);
  m = loadImage("m.png");
  P = loadImage("P.jpg");
}
void draw(){
  background(255);//白色的背景
  image(m, 0, 80, 250,300);//適當的大小,不要太肥
  image(P, x, y); //位置
}
float x = 300, y = 0; //位置
void mouseDragged(){
  x += (mouseX-pmouseX); //會調整位置
  y += (mouseY-pmouseY); //會調整位置
}
