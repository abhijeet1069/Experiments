function setup(){
    createCanvas(640,360);
}

function draw(){
    background(51);
    let mouse = createVector(mouseX,mouseY);
    let center = createVector(width/2);
    
    mouse.sub(center);
    mouse.mult(0.5);
    translate(width);

}