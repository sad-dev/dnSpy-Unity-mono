#ifndef __MONO_EMBED_H__
#define __MONO_EMBED_H__

#include <mono/utils/mono-publib.h>

MONO_BEGIN_DECLS

/* 
 * This is a fallback for platform symbol loading functionality.
 */
typedef struct {
	const char *name;	
	void *addr;
} MonoDlMapping;

void mono_dl_register_library (const char *name, MonoDlMapping *mappings);

MONO_END_DECLS

#endif /* __MONO_EMBED_H__ */
