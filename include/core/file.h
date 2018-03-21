//
// Created by brian on 3/21/18.
//

#pragma once

#include "common.h"

namespace nox {

class File {
public:
    File() {}
    File(const String& path);
    File(const File&);
    ~File();    //figure out if this thing is going to be subclassed and if so make it virtual
    File& operator=(const String& path);
    File& operator=(const File& file);
    File(File&& target);
    File& operator=(File&& target);

    ///Is this a file or a directory?
    bool exists() const;

    ///Is this a file?
    bool is_file() const;

    bool is_symbolic_link() const;

    bool is_directory() const;

    i64 get_size();

    String file_name() const;

    String file_extension() const;

    File parent_directory() const;

private:
    String m_full_path;


};
}