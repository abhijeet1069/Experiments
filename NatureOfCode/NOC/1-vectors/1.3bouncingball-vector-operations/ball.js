class Ball{
    constructor(){
        this.position = new createVector(100,100);
        this.velocity = new createVector(2.5,5);
    }

    update(){
        this.position.add(this.velocity);
        if((this.position.x > width) || (this.position.x < 0)){
            this.velocity.x = this.velocity.x*-1;
        }
        if((this.position.y > height) || (this.position.y < 0)){
            this.velocity.y = this.velocity.y*-1;
        }
    }

    display(){
        stroke(0);
        fill(175);
        ellipse(this.position.x, this.position.y, 48, 48);
    }
}