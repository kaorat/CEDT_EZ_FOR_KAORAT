#include <iostream>
#include <string>

int main()  
{
    int time, i = 0, sum = 0, rtime = 0, r1time = 0, x = 0;
    std::string input, event;
    std::cin >> time;
    std::cin.ignore();
    while (i < time){   
        rtime = 0;
        r1time = 0;
        sum = 0;
        std::getline(std::cin>>std::ws, input);
        std::cin.ignore();
        for (int i = 0; i < input.length(); i++)
        {
            if (input[i] == 'R')
            {
                rtime += 1;
            }
        }
        for (int i = 0; i < input.length(); i++)
        {
            if (i % 4 == 0)
            {
                if (input[i] == 'R')
                {
                    sum += 1;
                    r1time += 1;
                    if (r1time == rtime)
                    {
                        if (i == input.length() - 1)
                        {
                            continue;
                        }
                        else if (input[i + 3] == ' ')
                        {
                            if (input[i + 2] == 'Y')
                            {
                                sum += 2;
                            }
                            else if (input[i + 2] == 'G')
                            {
                                sum += 3;
                            }
                            else if (input[i + 2] == 'N')
                            {
                                sum += 4;
                            }
                            else if (input[i + 2] == 'B')
                            {
                                sum += 5;
                            }
                            else if (input[i + 2] == 'P')
                            {
                                sum += 6;
                            }
                            else if (input[i + 2] == 'K')
                            {
                                sum += 7;
                            }
                            event = input.substr(i + 4, input.length() - i - 1);
                            break;
                        }
                    }
                }
                else
                {
                    std::cout << "WRONG_INPUT" << std::endl;
                    x += 1;
                    break;
                }
            }
            else
            {
                if (input[i] == ' ')
                {
                    continue;
                }
                else if (input[i] == 'Y')
                {
                    sum += 2;
                }
                else if (input[i] == 'G')
                {
                    sum += 3;
                }
                else if (input[i] == 'N')
                {
                    sum += 4;
                }
                else if (input[i] == 'B')
                {
                    sum += 5;
                }
                else if (input[i] == 'P')
                {
                    sum += 6;
                }
                else if (input[i] == 'K')
                {
                    sum += 7;
                }
                else
                {
                    std::cout << "WRONG_INPUT" << std::endl;
                    x += 1;
                    break;
                }
            }
        }
        for (int i = 0; i < event.length(); ++i)
        {
            if (i % 2 == 0)
            {
                if (i == 0 && event[i] == 'Y')
                {
                    sum += 2;
                }
                else if (i == 2 && event[i] == 'G')
                {
                    sum += 3;
                }
                else if (i == 4 && event[i] == 'N')
                {
                    sum += 4;
                }
                else if (i == 6 && event[i] == 'B')
                {
                    sum += 5;
                }
                else if (i == 8 && event[i] == 'P')
                {
                    sum += 6;
                }
                else if (i == 10 && event[i] == 'K')
                {
                    sum += 7;
                }else{
                    std::cout << "WRONG_INPUT" << std::endl;
                    x += 1;
                    break;
                }
            }
            else if (i%2==1){
                continue;
            }
            else
            {
                std::cout << "WRONG_INPUT" << std::endl;
                x += 1;
                break;
            }
        }

        if (x == 0)
        {
            std::cout << sum << std::endl;
        }

        i++;
    }

    return 0;
}
