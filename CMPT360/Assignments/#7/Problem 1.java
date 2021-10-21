    class Stock{
    String symbol;
    String name;
    double previousClosingPrice;
    double currentPrice;
    
    //divider//
    
    //default constructor
    Stock(){}
    Stock(String newSymbol, String newName){
        symbol = newSymbol;
        name = newName;
    }
    Stock(String newSymbol, String newName, double newPreviousClosingPrice, double newCurrentPrice){
        symbol = newSymbol;
        name = newName;
        previousClosingPrice = newPreviousClosingPrice;
        currentPrice = newCurrentPrice;
    }
    double getChangePercent(){
        return (currentPrice-previousClosingPrice)/previousClosingPrice;
    }
    String getSymbol(){
        return symbol;
    }
    String getName(){
        return name;
    }
    double getPreviousClosingPrice(){
        return previousClosingPrice;
    }
    void setPreviousClosingPrice(double newPreviousClosingPrice){
        previousClosingPrice = newPreviousClosingPrice;
    }
    double getCurrentPrice(){
        return currentPrice;
    }
    void setCurrentPrice(double newCurrentPrice){
        currentPrice = newCurrentPrice;
    }
    }
    public class Circle{
    public static void main(String[] args) {
        Stock stock = new Stock("SUNW", "Sun MicroSystems Inc.");
        stock.setPreviousClosingPrice(100);
        // Set current price
        stock.setCurrentPrice(90);
        // Display stock info
        System.out.println("Previous Closing Price: " +
        stock.getPreviousClosingPrice());
        System.out.println("Current Price: " +
        stock.getCurrentPrice());
        System.out.println("Price Change: " +
        stock.getChangePercent() * 100 + "%");
    }
}
