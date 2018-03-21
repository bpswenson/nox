//
// Created by brian on 3/21/18.
//
#pragma once

#include "common.h"

namespace nox {

class NetworkAdapter;

//going to be easier to do this as a singleton for now
//ideally make it into just a namespace
class SystemInfo {
public:

    bool has_sse2();

    bool has_sse3();

    bool has_sse4_1();

    bool has_sse4_2();

    bool is_x86_64();

    bool is_arm();

    bool processor_count();

    bool core_count();



};

//TODO add additional functionality

class NetworkAdapter {
public:
    const String& name() const { return m_name; }
    const String& ip_address() const { return m_ip_address; }
    const String& subnet_mask() const { return m_subnet_mask; }

    NetworkAdapter(const String name, const String ip, const String subnet) :
            m_name(std::move(name)),
            m_ip_address(std::move(ip)),
            m_subnet_mask(std::move(subnet)) {}
private:
    String m_name;
    String m_ip_address;
    String m_subnet_mask;
};

//for pretty print network adapters
inline std::ostream& operator <<(std::ostream& out, const NetworkAdapter& adapter) {
    out << adapter.name() << ": " << adapter.ip_address() << " " << adapter.subnet_mask() << "\n";
}

}