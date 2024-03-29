# Check for Palindrome

![Issues](https://img.shields.io/github/issues/josola/palindrome?style=for-the-badge)
![License](https://img.shields.io/github/license/josola/palindrome?style=for-the-badge)
![Last Commit](https://img.shields.io/github/last-commit/josola/palindrome?style=for-the-badge)

Checks if a word, name, number, sentence, or poem is a palindrome. A palindrome is a word, phrase, verse, number, or sentence that reads
the same backward or forward. For example: A man, a plan, a canal, Panama!

## Installation
This tool runs on Make. To install it, run the following commands:
```
$ git clone <this repository>
$ cd palindrome
$ make
```

## Usage
To use this tool, run the following command:
```
$ ./build/palindrome <command> <input>
```

### Commands
* help - Shows the help menu.
* text - Checks if a text is a palindrome.
* sentence - Checks if a sentence is a palindrome.
* poem - Checks if a poem is a palindrome.
* number - Checks if a number is a palindrome.

## Examples
```
$ ./build/palindrome help
$ ./build/palindrome text racecar
$ ./build/palindrome sentence A man, a plan, a canal, Panama!
$ ./build/palindrome poem path/to/palindrome_poem.txt
$ ./build/palindrome number 12321
```

## Testing
Test poems have not been provided, but you can create your own and place them in
the `test/resources/` directory. The tests will fail at any assertion that is
not met. To run the tests, run the following command:
```
$ cd test
$ make
$ ./build/test
```

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.
