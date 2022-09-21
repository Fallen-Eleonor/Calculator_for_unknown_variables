# Our joint project with dljubyvyj for ukode: Race01.
The essence of this project is to develop an algorithm for decryption. The program accepts a corket value, which is encrypted with the special character ? and depending on this, the necessary parameter does not go, selecting them from among the possible ones. The algorithm reminds you all of the familiar brute force, but for good purposes - encryption and data protection.

![Encryption-vs-Decryption](https://user-images.githubusercontent.com/95318722/191483143-45870c1e-a4d2-4b40-987a-eb37b2fe66e6.jpg)

Encryption is the process of converting plain text into cipher text, i.e. converting the text from readable format to nonreadable format to secure the conversation between two parties or from the unauthorized person; on the other hand, Decryption is the process of converting ciphertext into plain text, i.e. converting the non-readable text into readable text which anyone can understand. Both methods use secret keys to perform desired operations.

<img src="https://www.venafi.com/sites/default/files/2020-12/Encrypt_Decrypt_Diff_1.png" alt="decryption" align = left> 

### The implementation of the decryption algorithm is not an easy task, as it seemed to us at first, but if you delve into the very essence, then everything becomes clear.
#### First, we have an inference rule, which we will write as a simple spelling of a write error.
![Снимок экрана от 2022-09-21 13-50-45](https://user-images.githubusercontent.com/95318722/191485903-2a7d7d29-520e-466e-b80f-207b05b87e6f.png)
#### Let's display its output in the terminal:
.![Снимок экрана от 2022-09-21 13-45-17](https://user-images.githubusercontent.com/95318722/191485602-af5e266e-0dcc-4fe6-81dc-20cd968be48c.png)
#### We need the program to output an error of the value (operand, operation, result) that we pass. The program accepts the specific character "?".
![Снимок экрана от 2022-09-21 13-55-42](https://user-images.githubusercontent.com/95318722/191486798-0bff3e6d-ccd6-4193-b4ac-65fb7520fc0a.png)
##### The current values of the command line go through a cycle during which the type of error is determined and, in fact, the presence of a non-contradiction of logic - the length of the string should not be less than 0.
![Снимок экрана от 2022-09-21 13-58-52](https://user-images.githubusercontent.com/95318722/191487386-75379207-9499-469b-9919-2bfbcab26af2.png)
##### The macros display further output of the cause of the error.
#### Let's display its output in the terminal:
![Снимок экрана от 2022-09-21 13-54-52](https://user-images.githubusercontent.com/95318722/191486669-0737f98d-187f-40fc-a1e6-76033e5e84e6.png)
#### We need to diversify the record type, ignoring spaces, as an example, thanks to a special function - mx_strtrim.
![Снимок экрана от 2022-09-21 14-04-10](https://user-images.githubusercontent.com/95318722/191488369-417267f0-f6a4-4b22-aeb4-ef0e26376415.png)
##### We can write the values however we like without violating the framework of the input rule.




