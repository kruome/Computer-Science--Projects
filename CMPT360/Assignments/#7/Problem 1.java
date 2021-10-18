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
        
    }
    String getSymbol(){
        
    }
    String getName(){
        
    }
    double getPreviousClosingPrice(){
    
    }
    
    
    
}
