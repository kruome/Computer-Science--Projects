public class Circle {
  /** Main method */
  public static void main(String[] args) {
  }
}
class TV{
    int channel = 1;
    int volumeLevel = 1;
    boolean on = false;
    
    TV(){
    }
    void turnOn(){
        on = true;
    }
    void turnOff(){
        on = false;
    }
    void setChannel(int newChannel){
        if(channel>=1 && on && channel<=120){
            channel = newChannel;
        }
    }
    void setVolume(int newVolume){
        if(volumeLevel>=1 && volumeLevel<=7){
        volumeLevel = newVolume;
        }
    }
    void channelUp(){
        if(channel <= 120 && on){
            channel = channel + 1;
        }
    }
    void channelDown(){
        if(channel > 1 && on){
            channel = channel + -1;
        }
    }
    void volumeUp(){
        if(volumeLevel <7 && on){
            volumeLevel = volumeLevel + 1;
        }
    }
    void volumeDown(){
        if(volumeLevel > 1 && on){
            volumeLevel = volumeLevel - 1;
        }
    }
}
