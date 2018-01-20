#ifndef __OUVRT_PIPEWIRE_H__
#define __OUVRT_PIPEWIRE_H__

#ifdef HAVE_PIPEWIRE
int pipewire_init(int *argc, char **argv[]);
void pipewire_deinit(void);
#else
static inline int pipewire_init(int *argc, char **argv[])
{
	return 0;
}
static inline void pipewire_deinit(void)
{
}
#endif /* HAVE_PIPEWIRE */

#endif /* __OUVRT_PIPEWIRE_H__ */
