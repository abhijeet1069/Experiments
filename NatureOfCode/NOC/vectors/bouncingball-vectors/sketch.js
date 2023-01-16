let position;
let velocity;

function setup() {
  createCanvas(640,360);
  background(255);
  position = createVector(100,100);
  velocity = createVector(2.5,5);
}

function draw() {
  background(255);
  x += xspeed;
  y += yspeed;

  if((x > width) || (x < 0)){
    xspeed *= -1;
  }

  if((y > height) || (y < 0)){
    yspeed *= -1;
  }

  stroke(0);
  strokeWeight(2);
  fill(127);
  ellipse(x,y,48,48);
  strokeWeight(3);
  //line(x,y,x+(30*xspeed),(y+30*yspeed)); //for line 
}
