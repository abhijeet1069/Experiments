package sample;

import processing.core.PApplet;

public class Sample1 extends PApplet{
    public static void main(String[] args) {
        String[] processingArgs = {"Sample1"};
        Sample1 sketch = new Sample1();
        PApplet.runSketch(processingArgs,sketch);
    }
}