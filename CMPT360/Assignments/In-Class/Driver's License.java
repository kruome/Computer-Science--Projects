import java.util.Scanner;
public class JavaApplication5 {
    
    public static void getUserAnswers(char[] studentAns){
        Scanner input = new Scanner(System.in);
        
        for(int i = 0; i < studentAns.length ; i++){
            System.out.print("What is the answer to question #"+ (i+1)+ "?"); 
            String c = input.nextLine();
            studentAns[i]= c.charAt(0);
        }
    }
    public static int totalCorrect(char[] studentanswer, char[] answerkey){
        int correct = 0;
        for(int i = 0; i < answerkey.length;i++){
            if(Character.toUpperCase(studentanswer[i]) == answerkey[i]){
                correct++;
            }
        }
        return correct;
    }
    public static int totalincorrect(char[] studentanswer, char[] answerkey){
        int incorrect = 0;
        for(int i = 0; i < 10;i++){
            if(Character.toUpperCase(studentanswer[i]) != answerkey[i]){
                incorrect++;
            }
        }
        return incorrect;
    }
    public static int[] questionMissed(char[] studentans, char[] answers){
        int[] missedQuestions = new int[studentans.length];
        for (int i = 0; i < studentans.length; i++)
            if (Character.toUpperCase(studentans[i]) != answers[i])
                missedQuestions[i] = (i+1);
        return missedQuestions;
 }

    public static void printMissedQuest(int[] missedQ)
 {
        int count = 0;
        System.out.print("Questions missed: ");
        for (int i = 0; i < missedQ.length; i++){
            if (missedQ[i] != 0){
                count++;
                System.out.print(missedQ[i] + " ");
            }
        }
        if(count == 0)
            System.out.print("None");
        System.out.println();
 }
    public static boolean passed(char[] exam, char[] answers, double passing){
        if(totalCorrect(exam, answers) >= passing)
            return true;
        else
            return false;
 }

    
    public static void main(String[] args) {
       char[] answerkey = {'A','A','B','B','C','C','D','D','A','A'};
       char[] studentAns = new char[answerkey.length];
       getUserAnswers(studentAns);
       System.out.println("Total Correct: " + totalCorrect(studentAns, answerkey));
       System.out.println("Total Incorrect: " + totalincorrect(studentAns, answerkey));
       
       double passing = 6;
       
       int[] missedQuestions = questionMissed(studentAns,answerkey);
       printMissedQuest(missedQuestions);
       
       if(passed(studentAns, answerkey,passing)){
           System.out.println("You passed!");
       }else{
           System.out.println("You failed. Better luck next time.");
       }
    }
}
