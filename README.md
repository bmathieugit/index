---
# Index

Index is a full-text index-oriented database, written in C++. 
It is designed to enable fast search and retrieval of data, with 
an emphasis on efficiency and flexibility.

## Features

- **Fast Search**: Utilizes full-text indexing to provide rapid search performance.
- **Scalable**: Easily scalable and modifiable to fit various needs.
- **Portability**: Written in standard C++ to ensure portability across different platforms.
- **Multilingual Support**: Supports the indexing of texts in various languages.

## Dependencies

- C++20 compiler or higher
- n lib (https://github.com/bmathieugit/n)

## Compilation and Installation

1. Clone the repository:

   ```bash
   git clone https://github.com/bmathieugit/index.git
   ```

2. Navigate into the project directory:

   ```bash
   cd index
   ```

3. Compile the project:

   ```bash
   make
   ```

4. Install:

   ```bash
   make install
   ```

## Usage

After installation, you can begin using Index by following these steps:

1. **Create a Database**:

   ```c++
   Index::Database db("my_database");
   ```

2. **Add Data**:

   ```c++
   db.add("key", "value");
   ```

3. **Search Data**:

   ```c++
   auto results = db.search("query");
   ```

## Documentation

TODO

## Contributing

Contributions are welcome! Please read [CONTRIBUTING.md](CONTRIBUTING.md) for more details.

## License

Index is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contact

If you have any questions or issues, please feel free to open an issue or contact bmathieugit@gmail.com.

