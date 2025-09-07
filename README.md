# 42 Piscine

This repository is dedicated to consolidating everything I’ve learned during my Piscine journey at 42. It’s also meant to be a helpful resource for both new and returning Pisciners who are embarking on this unique and intense learning experience.

## Navigating the Piscine 

### Keep Swimming Forward 🏊‍♂️
In the Piscine, progress is what matters most. Focus on learning and don't worry about making everything perfect. Avoid getting stuck on a single project for too long; the key is to keep advancing and absorbing as much as you can. If an exercise feels too challenging, it’s perfectly fine to skip it and revisit later with more experience. Often, this approach helps solidify the concepts more effectively.

### Stay Honest - Choose Real Learning 🎓
How can you solve something when you have no idea where to start? The answer: **use resources wisely**. But remember, copying answers directly won’t help you in the long run—understanding how and why something works is where the real learning happens.

## My Learning Method

```c
void my_learning_method() {
    // Passo 1: Tente o básico por conta própria
    create_basic_structure();

    // Passo 2: Quando estiver travado, busque soluções semelhantes
    while (!understood) {
        if (stuck) {
            find_similar_solutions();
            analyze_code();

            if (understanding_code) {
                write_code_yourself();
            } else {
                transcribe_code();
                test_and_debug_code();

                if (still_confused) {
                    use_debugging_tools();
                }
            }
        }
    }

    // Passo 3: A repetição leva à compreensão
    if (repeated_enough) {
        knowledge_consolidated();
    }
}
```

### How To Login Into The Exam

### Step 1️⃣: Login into the terminal.
- **Username:** `exam`
- **Password:** `exam`

### Step 2️⃣: Run the examshell.
Once logged in, type the following command in the terminal:

⌨️ Type ``` examshell ```

### Step 3️⃣: Authenticate yourself.
Enter your 42 intra login and password:
- **Username:** `<your intra username>` (ex., `fmanca`)
- **Password:** `<your intra password>`

### Step 4️⃣: Allow photo check.
🎥 Follow the on-screen instructions to allow the system to use a photo of you for identity verification.

### Step 5️⃣: Access the `Rendu` directory.
Type `yes` when prompted to access the `Rendu` directory.

---

## How To Work During The Exam

### Available Commands
- `status`: Shows the remaining time and current status of the exam.
- `grademe`: Evaluates the exercise you submitted.
- `finish`: Ends the examshell and completes your exam.

### Steps to Follow
1. Open a new terminal or editor (ex., VSCode, Vim).

2. Access the directory containing the exam subjects.
   - The subjects are located in the `subject` directory.

3. Create a new folder in the `Rendu` directory with the name of the project.
   ```bash
   mkdir Rendu/<project_name>
   cd Rendu/<project_name>
   ```
4. Write your solution inside this folder.

### Step 6️⃣: Submitting Your Work.
1. Once you finish the project, navigate to the `Rendu` directory and run:

   ```bash
   git add <project_name>
   git commit -m "Submit <project_name>"
   git push
   ```
2. Return to the examshell and type `grademe` to evaluate your project.

---

## Tips and Tricks
- Always check the remaining time using the `status` command.
- Save your work frequently to avoid data loss.
- Use debugging tools to understand errors and improve your code.
- If you are stuck, re-read the subject and focus on understanding the requirements.
Good luck with your exam!
