def Initialize():
    import pygame
    import time
    import random

    # Initialize pygame
    pygame.init()

    # Window size
    WIDTH = 600
    HEIGHT = 400

    # Colors
    BLACK = (0, 0, 0)
    WHITE = (255, 255, 255)
    GREEN = (0, 255, 0)
    RED = (213, 50, 80)
    BLUE = (50, 153, 213)

    # Snake block size
    BLOCK_SIZE = 10
    SPEED = 5

    # Load snake image
    # snake_img = pygame.image.load("snake.png")
    # snake_img = pygame.transform.scale(snake_img, (snake_block, snake_block))

    # Fonts
    font_style = pygame.font.SysFont("arial", 25)
    score_font = pygame.font.SysFont("impact", 30)

    # Display
    screen = pygame.display.set_mode((WIDTH, HEIGHT))
    pygame.display.set_caption("Snake Game by Ritika Desale")

    clock = pygame.time.Clock()

    def score_display(score):
        value = score_font.render("Score: " + str(score), True, WHITE)
        screen.blit(value, [10, 10])

    #def draw_snake(block_size, snake_list):
    # for x in snake_list:
        #  pygame.draw.rect(screen, GREEN, [x[0], x[1], block_size, block_size])
    # Load snake image

    def draw_snake(BLOCK_SIZE, snake_list):
        for i in range(len(snake_list)):
            x , y = snake_list[i]
            if i == len(snake_list) - 1:
                # Head
                # Draw rounded face (circle at front)
                pygame.draw.rect(screen, GREEN, [x, y,BLOCK_SIZE , BLOCK_SIZE], border_radius=BLOCK_SIZE // 2)

                # Eyes
                eye_radius = 2
                eye_offset_x = 3
                eye_offset_y = 3
                pygame.draw.circle(screen, BLACK, (int(x + eye_offset_x), int(y + eye_offset_y)), eye_radius)
                pygame.draw.circle(screen, BLACK, (int(x +BLOCK_SIZE- eye_offset_x), int(y + eye_offset_y)), eye_radius)
            else:
                # Body (just rectangles)
                pygame.draw.rect(screen, GREEN, [x, y,BLOCK_SIZE ,BLOCK_SIZE ])

            # screen.blit(snake_list, ([10 , 10]))
    



    def message(msg, color):
        mesg = font_style.render(msg, True, color)
        screen.blit(mesg, [WIDTH / 6, HEIGHT / 3])

    def game_loop():
        game_over = False
        game_close = False

        x1 = WIDTH / 2 # position of box (x , y )
        y1 = HEIGHT / 2

        x1_change = 0 # change in every loop (change per second) - x speed and y speed
        y1_change = 0

        snake_list = []
        snake_length = 1

        foodx = round(random.randrange(0, WIDTH - BLOCK_SIZE) / 20.0) * 20.0
        foody = round(random.randrange(0, HEIGHT - BLOCK_SIZE) / 20.0) * 20.0

        foodx2 = round(random.randrange(0, WIDTH - BLOCK_SIZE) / 20.0) * 20.0
        foody2 = round(random.randrange(0, HEIGHT - BLOCK_SIZE) / 20.0) * 20.0

        while not game_over:

            while game_close:
                screen.fill(BLACK)
                message("You lost! Press Q-Quit or C-Play Again", RED)
                score_display(snake_length - 1)
                pygame.display.update()
    # keyboard e kuchh likhna , mouse click , ek particular section me hi click karna 
                for event in pygame.event.get():
                    if event.type == pygame.KEYDOWN:
                        if event.key == pygame.K_q:
                            game_over = True
                            game_close = False
                        if event.key == pygame.K_c:
                            game_loop()

            for event in pygame.event.get():
                if event.type == pygame.QUIT:
                    game_over = True
                elif event.type == pygame.KEYDOWN:
                    if event.key == pygame.K_LEFT:
                        x1_change = -BLOCK_SIZE
                        y1_change = 0
                    elif event.key == pygame.K_RIGHT:
                        x1_change = BLOCK_SIZE
                        y1_change = 0
                    elif event.key == pygame.K_UP:
                        y1_change = -BLOCK_SIZE
                        x1_change = 0
                    elif event.key == pygame.K_DOWN:
                        y1_change = BLOCK_SIZE
                        x1_change = 0

            # Check boundaries Game lost condition 
            if x1 >= WIDTH or x1 < 0 or y1 >= HEIGHT or y1 < 0:
                game_close = True

            x1 += x1_change  # x1 = x1 + x1_change
            y1 += y1_change # y1 = y1 + y1_change
            screen.fill(BLACK)
            pygame.draw.rect(screen, RED, [foodx, foody, BLOCK_SIZE, BLOCK_SIZE])
            
            pygame.draw.rect(screen, RED, [foodx2, foody2, BLOCK_SIZE, BLOCK_SIZE])

            snake_head = [x1 , y1]
            
            snake_list.append(snake_head)

            if len(snake_list) > snake_length:
                del snake_list[0]

            # Check for collision with self
            for block in snake_list[:len(snake_list)-1]:
                if block == snake_head:
                    game_close = True

            draw_snake(BLOCK_SIZE, snake_list)
            score_display(snake_length - 1)

            pygame.display.update()

            # Eat food
            if (x1 == foodx and y1 == foody) or (x1 == foodx2 and y1 == foody2):
                foodx = round(random.randrange(0, WIDTH - BLOCK_SIZE) / 20.0) * 20.0
                foody = round(random.randrange(0, HEIGHT - BLOCK_SIZE) / 20.0) * 20.0
                foodx2 = round(random.randrange(0, WIDTH - BLOCK_SIZE) / 20.0) * 20.0
                foody2 = round(random.randrange(0, HEIGHT - BLOCK_SIZE) / 20.0) * 20.0
                snake_length += 1

            clock.tick(SPEED)

        pygame.quit()
        quit()

    game_loop()
Initialize()