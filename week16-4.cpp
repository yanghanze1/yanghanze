void setup(){
  size(300,300);
}
int x=150, y=150, x2=300, y2=150;
void draw(){
  background(#FFFFF2);
  ellipse(x, y, 30, 30);
  ellipse(x2, y2, 30, 30);
  x += vx; y += vy;
  x2+= vx2; y2+= vy2;
}
void keyPressed(){
  if( key=='w' )vy = -2;
  if( key=='s' )vy = +2;
  if( key=='a' )vy = -2;
  if( key=='d' )vy = +2;
  if( keyCode==UP ) vy2 = -2;
  if( keyCode==DOWN ) vy2 = +2;
  if( keyCode==LEFT ) vx2 = -2;
  if( keyCode==RIGHT ) vx2 = +2;
}
void keyReleased(){
  if( key=='w' ) vy = 0;
  if( key=='s' ) vy = 0;
  if( key=='a' ) vx = 0;
  if( key=='d' ) vx = 0;
  if( keyCode==UP ) vy2 = 0;
  if( keyCode==DOWN ) vy2 = 0;
  if( keyCode==LEFT ) vx2 = 0;
  if( keyCode==RIGHT ) vx2 = 0;
}
