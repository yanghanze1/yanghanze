void setup(){
  size(300,300);
}
int x=150, y=150, x2=300, y2=150;
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
}
void keyPressed(){
  if( key=='w' )y -= 2;
  if( key=='s' )y += 2;
  if( key=='a' )y -= 2;
  if( key=='d' )y += 2;
  if( keyCode==UP ) y2 -= 2;
  if( keyCode==DOWN ) y2 += 2;
  if( keyCode==LEFT ) x2 -= 2;
  if( keyCode==RIGHT ) x2 += 2;
}
