👨‍💻 How Computers Process Code:

    1️⃣ Think of a problem → 🧠💡
    2️⃣ Write steps (Pseudochart 📜, Flowchart 🔄)
    3️⃣ Convert steps into C++ code (int main() {...} 👨‍💻)
    4️⃣ Compiler translates 🏗️ (C++ ❌ → Machine Code ✅)
    5️⃣ Computer executes the program 💻⚡


⚡ How Transistors Store Data:

    🔲 Each transistor can store:

        0️⃣ = OFF
        1️⃣ = ON
       
    Example: Storing 5

        ✍️ 5 in binary ➡️ 101
        🖥️ It needs 3 transistors:

            1️⃣  0️⃣  1️⃣ 

        📦 Each transistor stores 1 bit (either 0 or 1).


🔠 How Words Are Stored in Binary:

    📝 Each letter has a code (ASCII/Unicode) 🔢

    Example: 'A'

        🔢 ASCII code of A = 65
        🖥️ Binary of 65 = 1000001

    🏗️ Stored in transistors:
    
        1️⃣ 0️⃣ 0️⃣ 0️⃣ 0️⃣ 0️⃣ 1️⃣


🖼️ Image Storage in Binary:

    📸 An image is made of pixels (tiny squares of color). Each pixel has color information, which is stored as binary values.

    🎨 RGB Color Model (Red, Green, Blue):

        Each pixel is a combination of Red (🔴), Green (🟢), and Blue (🔵).
        Each color intensity is stored as an 8-bit number (0 to 255).

    💡 Example: A Single Pixel

        Color	Decimal (0-255)	Binary (8 bits)

            🔴 Red	200	11001000
            🟢 Green	100	01100100
            🔵 Blue	50	00110010

        So, a single pixel in RGB format is stored as:

            11001000 01100100 00110010  (🔴200, 🟢100, 🔵50)

        🖼️ A full image = Millions of pixels (each with 24 bits or 3 bytes per pixel).  


🎥 Video Storage in Binary:

    🎥 A video is just a sequence of images played rapidly! Each image (frame) is stored just like a normal image, and then they are played one after another at a fast speed.

    🔢 Example: 24 FPS (Frames per Second)

        1 second of video = 24 images
        Each image is made of pixels
        Each pixel is stored in binary

        If a single image is 1MB, then:
            📽️ 1 second of video (24 images) ≈ 24MB
            🎬 1 minute of video (60 sec) ≈ 1440MB (~1.4GB)

        To reduce size, we use compression techniques (MP4, AVI, etc.).


🎵 Audio Storage in Binary

    🔊 Audio is a waveform (sound waves) that gets sampled (converted to numbers) and then stored as binary.

    🎼 Step 1: Convert Sound to Numbers (Sampling) A microphone measures sound waves at different points in time.

    More samples per second = better audio quality.

    🛠️ CD Audio Standard:

        📌 44,100 samples per second (44.1 kHz)
        📌 16 bits per sample

    🎧 Example: "Hello" Sound Wave

        🎤 Mic takes samples → Converts to numbers → Stores as binary

    💡 Example: "Ahhh" sound wave sampled

        00011001 01101011 11100100 10101011 ...

    Each number represents a volume level (loudness) at a specific time.

        🎶 Stereo Audio has two channels (Left 🔊 & Right 🔊).
        🎵 MP3, WAV, AAC are formats that compress the audio for storage.


Why Was C++ Created? 🤔

    🛠️ C = Procedural Programming (Functions ⚙️)
    🎭 C++ = Object-Oriented (Objects 📦)

    🤷‍♂️ Problems in C:

        Large programs got messy 😵‍💫
        No reusability 🔁
        No classes & objects 🚫📦

    ✅ C++ solved this! 🚀


🌍 What is Cross-Platform?

    C++ can run on Windows 🏁, Linux 🐧, Mac 🍏 without rewriting code!

🛠️ Which Compiler Does C++ Use?

    👨‍💻 Popular compilers:

        🟢 GCC (Linux)
        🔵 Clang (Mac, Linux)
        🏁 MSVC (Windows)


💻 First C++ Code 💻

    #include <iostream>  // 📦 Input/Output Library
    using namespace std; // 🚀 No need to write std:: every time

    int main() {        // 🔑 Entry point
        cout << "Hello World";  // 📝 Print text
        return 0;       // ✅ Successful execution
    }


🔢 Data Types and Memory

    💾 Integer (int):

        📦 Size: 4 bytes = 32 bits
        🤔 Why 32 bits?
        ✅ Efficiency on 32-bit processors
        🚀 Faster memory access
        ⏳ Not wasted! (Used for future extensions, CPU alignment)

        Example:

            int x = 10; // 00000000 00000000 00000000 00001010

        🔍 Even though 10 takes 4 bits, it is stored in 32 bits.


    💾 Character (char):

        📦 Size: 1 byte (8 bits)
        Example: 'A' ➡️ 65 ➡️ 01000001


    💾 Float (float)

        📦 Size: 4 bytes (32 bits)
        🤔 Why not use only int? Because float stores decimals (e.g., 3.14 🎯)


    💾 Double (double)

        📦 Size: 8 bytes (64 bits)
        🤔 Why needed? More precision than float 🔬


    💾 Boolean (bool)

        📦 Size: 1 byte (even though it holds just true (1️⃣) or false (0️⃣))


🧮 Negative & Positive Integers in Binary:

    🔢 Sign Bit (MSB) decides sign

        0️⃣ → Positive
        1️⃣ → Negative

    ✅ Example: 5

        00000101  (5️⃣)

    ❌ Example: -5

        1️⃣???????  (Negative number)


    1’s Complement (🔄 Flip all bits)

        00000101  (5️⃣)
        11111010  (-5 in 1’s complement)


    2’s Complement (➕ Add 1)

        11111010  (1’s complement of -5)
        ➕      1  
        --------------
        11111011  (-5 in 2’s complement)


    🎯 Why Use 2’s Complement? 
    
        ✅ Simple subtraction
        ✅ No duplicate zeros (+0 & -0 issue in 1’s complement)
        ✅ Easy addition/subtraction (same hardware can process both)

