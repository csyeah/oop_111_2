import java.util.Scanner;


class stack {
    char[] stck = new char[100];
    int top;
    public void initialize() {
        top = -1;
    }
    public void push(char ch) {
        stck[++top] = ch;
    }
    public char pop() {
        char tmp = stck[top--];
        return tmp;
    }
}
public class hw1 {
    
    public static void main(String[] args) {
        
        for (;;) {

            String line;
            stack new_stack = new stack();
            new_stack.initialize();

            Scanner input = new Scanner(System.in);
            System.out.print("enter your expression:");
            line = input.nextLine();
            //char[] line_array = new char[line.length()];

            for (int i = 0; i < line.length(); i++) 
            {
                char pop_left, pop_right, tmp_num;
                if (line.charAt(i) <= '9' && line.charAt(i) >= '1')
                    new_stack.push((char)(line.charAt(i) - '0'));
                else
                {
                    switch (line.charAt(i)) {
                        case '+':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)(pop_left + pop_right));
                            break;
                        case '-':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)(pop_left - pop_right));
                            break;
                        case '*':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)(pop_left * pop_right));
                            break;
                        case '/':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)(pop_left / pop_right));
                            break;
                        case '%':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)(pop_left % pop_right));
                            break;
                        case '^':
                            pop_right = new_stack.pop();
                            pop_left = new_stack.pop();
                            new_stack.push((char)Math.pow(pop_left, pop_right));
                            break;
                        default:
                            break;
                    }
                }
            }
            int ans = new_stack.pop();
            System.out.println("the value of expression is:" + ans);
            loops:
                for (;;) {
                    System.out.println("continue?");
                    char opt;
                    Scanner optScanner = new Scanner(System.in);
                    opt = optScanner.next().charAt(0);
                    if (opt == 'Y' || opt == 'y')
                        break loops;
                    else if (opt == 'N' || opt == 'n')
                        System.exit(0);//end the program
                    else {
                        System.out.println("enter Y/y or N/n");
                        continue loops;
                    }
                }
        }
    }
}
