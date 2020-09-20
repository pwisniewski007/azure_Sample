if(UNIX)
  set(SOURCES
    main.cpp
    AzureStorageCommandLog.cpp
    AzureStorageCommandAdd.cpp
   AzureStorageCommandRemove.cpp
   AzureStorage.cpp
    AzureStorage.h
  )
endif()

add_executable(azure_Sample ${SOURCES})

target_include_directories(azure_Sample PRIVATE ${AZURESTORAGE_INCLUDE_DIRS})
target_link_libraries(azure_Sample ${AZURESTORAGE_LIBRARIES})
