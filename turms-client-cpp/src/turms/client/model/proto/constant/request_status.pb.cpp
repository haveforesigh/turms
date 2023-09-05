// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: constant/request_status.proto

#include "turms/client/model/proto/constant/request_status.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace turms {
namespace client {
namespace model {
namespace proto {
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace turms {
namespace client {
namespace model {
namespace proto {
bool RequestStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}
static ::google::protobuf::internal::ExplicitlyConstructed<std::string>
    RequestStatus_strings[7] = {};

static const char RequestStatus_names[] = {
    "ACCEPTED"
    "ACCEPTED_WITHOUT_CONFIRM"
    "CANCELED"
    "DECLINED"
    "EXPIRED"
    "IGNORED"
    "PENDING"
};

static const ::google::protobuf::internal::EnumEntry RequestStatus_entries[] =
    {
        {{&RequestStatus_names[0], 8}, 1},
        {{&RequestStatus_names[8], 24}, 2},
        {{&RequestStatus_names[32], 8}, 6},
        {{&RequestStatus_names[40], 8}, 3},
        {{&RequestStatus_names[48], 7}, 5},
        {{&RequestStatus_names[55], 7}, 4},
        {{&RequestStatus_names[62], 7}, 0},
};

static const int RequestStatus_entries_by_number[] = {
    6,  // 0 -> PENDING
    0,  // 1 -> ACCEPTED
    1,  // 2 -> ACCEPTED_WITHOUT_CONFIRM
    3,  // 3 -> DECLINED
    5,  // 4 -> IGNORED
    4,  // 5 -> EXPIRED
    2,  // 6 -> CANCELED
};

const std::string& RequestStatus_Name(RequestStatus value) {
  static const bool kDummy =
      ::google::protobuf::internal::InitializeEnumStrings(
          RequestStatus_entries, RequestStatus_entries_by_number,
          7, RequestStatus_strings);
  (void)kDummy;

  int idx = ::google::protobuf::internal::LookUpEnumName(
      RequestStatus_entries, RequestStatus_entries_by_number, 7,
      value);
  return idx == -1 ? ::google::protobuf::internal::GetEmptyString()
                   : RequestStatus_strings[idx].get();
}

bool RequestStatus_Parse(absl::string_view name, RequestStatus* value) {
  int int_value;
  bool success = ::google::protobuf::internal::LookUpEnumValue(
      RequestStatus_entries, 7, name, &int_value);
  if (success) {
    *value = static_cast<RequestStatus>(int_value);
  }
  return success;
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace model
}  // namespace client
}  // namespace turms
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"